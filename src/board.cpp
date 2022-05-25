#include "board.h"
#include "iostream"
Board::Board(sf::RenderWindow* _window) : window(_window)
{
    this->user_w = new User(W);
    this->user_b = new User(B);
    this->window->setTitle("Chess");
    this->window->setFramerateLimit(60);
}

void Board::init()
{
    end = false;
    this->cells.resize(8);
    for (int row = 0; row < 8; row++)
    {
        this->cells[row].resize(8);
        for (int column = 0; column < 8; column++)
        {
            this->cells[row][column].rect.setSize(sf::Vector2f(setting::cell_size, setting::cell_size));
            if ((row+column)%2==0)
            {
                this->cells[row][column].rect.setFillColor(setting::cell_color_white);
            }
            else{
                this->cells[row][column].rect.setFillColor(setting::cell_color_black);
            }
            this->cells[row][column].rect.setPosition(get_cell_position(row, column));
        }
    }
    this->curr_user = this->user_w;
    font.loadFromFile("resources/fonts/roboto.ttf");
    status_text.setFont(font);
    status_text.setCharacterSize(30);
    status_text.setStyle(sf::Text::Regular);
    status_text.setFillColor(sf::Color::Black);
    status_text.setPosition(400.f, 80.f);
    this->update_status_text();
}
void Board::draw()
{
    for (int row = 0; row < 8; row++)
        for (int column = 0; column < 8; column++)
        {
            this->window->draw(this->cells[row][column].rect);
            if (this->cells[row][column].cell_status == OCCUPIED)
                this->window->draw(this->cells[row][column].wb->sprite);
        }
    this->window->draw(this->status_text);
}
void Board::run()
{
    this->init();
    this->window->display();
    while (this->window->isOpen()) {
        sf::Event event;

        while (this->window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window->close();
            }
            if (!this->end && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                this->mouse_clicked(sf::Mouse::getPosition(*(this->window)));
            }
        }
        this->window->clear(sf::Color(150, 150, 150));
        this->update_status_text();
        this->draw();
        this->window->display();
    }
}
void Board::mouse_clicked(const sf::Vector2i& position)
{
    int row = get_cell_index(position.y), column = get_cell_index(position.x);
    if (row == -1 || column == -1)
        return;
    if (this->cells[row][column].cell_status == OCCUPIED) // empty --> occupied
        this->cell_occupied_clicked(row, column);
}

void Board::cell_occupied_clicked(int row, int column)
{
    put_wb_in_cell(row, column);
    this->end = this->curr_user->check_win(this->cells);
    if (this->end)
        return;
    this->curr_user = this->curr_user->id == W ? this->user_o : this->user_w;
}

void Board::put_wb_in_cell(int row, int column)
{
    WB* wb = new WB(this->curr_user->id);
    wb->sprite.setPosition(this->cells[row][column].rect.getPosition());
    this->cells[row][column].wb = wb;
    this->cells[row][column].cell_status = OCCUPIED;
}

void Board::update_status_text()
{
    if (this->end)
        status_text.setString(get_name_of_id(this->curr_user->id) + " Wins!");
    else
        status_text.setString(get_name_of_id(this->curr_user->id) + " Turn");
}