//Created by Paweł Smyl

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

int main()
{
    sf::Music music1;
    sf::Music music2;
    sf::Music music3;
    sf::Music music4;
    sf::Music music5;
    sf::Music music6;
    sf::Music music7;
    sf::Music music8;
    sf::Music music9;
    sf::Music music10;
    sf::Music music11;
    sf::Music music12;
    sf::Music music13;
    sf::Music music14;
    sf::Music music15;
    sf::Music music16;
    sf::Music music17;
    sf::Music music18;
    sf::Music music19;
    sf::Music music20;
    sf::Music music21;
    sf::Music music22;
    sf::Music music23;
    sf::Music music24;
    sf::Music music25;
    sf::Music music26;
    sf::Music music27;
    sf::Music music28;
    sf::Music music29;
    sf::Music music30;
    sf::Music music31;
    sf::Music music32;
    sf::Music music33;
    sf::Music music34;
    sf::Music music35;
    sf::Music music36;

    sf::RenderWindow app(sf::VideoMode(1150, 610), "Simple Virtual Keyboard");

    sf::Texture texture;
    if (!texture.loadFromFile("svk.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    sf::Texture ck;
    if (!ck.loadFromFile("ck.png"))
        return -1;
    sf::Sprite sprite2(ck);
    sprite2.setPosition(-200,-200);

    sf::Texture bk;
    if (!bk.loadFromFile("bk.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite3(bk);
    sprite3.setPosition(-200,-200);

    while (app.isOpen())
    {
        sf::Event event;
        while (app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                app.close();

            else if (event.type == sf::Event::KeyPressed)
            {
                switch (event.key.code)
                {

                    case sf::Keyboard::Z:
                        if (!music1.openFromFile("note/C4.wav"))
                            return -1;
                        music1.play();
                        sprite2.setPosition(34,507);
                        break;

                    case sf::Keyboard::S:
                        if (!music2.openFromFile("note/C_4.wav"))
                            return -1;
                        music2.play();
                        sprite3.setPosition(54,410);
                        break;

                    case sf::Keyboard::X:
                        if (!music3.openFromFile("note/D4.wav"))
                            return -1;
                        music3.play();
                        sprite2.setPosition(87,507);
                        break;

                    case sf::Keyboard::D:
                        if (!music4.openFromFile("note/D_4.wav"))
                            return -1;
                        music4.play();
                        sprite3.setPosition(120,410);
                        break;

                    case sf::Keyboard::C:
                        if (!music5.openFromFile("note/E4.wav"))
                            return -1;
                        music5.play();
                        sprite2.setPosition(140,507);
                        break;

                    case sf::Keyboard::V:
                        if (!music6.openFromFile("note/F4.wav"))
                            return -1;
                        music6.play();
                        sprite2.setPosition(193,507);
                        break;

                    case sf::Keyboard::G:
                        if (!music7.openFromFile("note/F_4.wav"))
                            return -1;
                        music7.play();
                        sprite3.setPosition(210,410);
                        break;

                    case sf::Keyboard::B:
                        if (!music8.openFromFile("note/G4.wav"))
                            return -1;
                        music8.play();
                        sprite2.setPosition(245,507);
                        break;

                    case sf::Keyboard::H:
                        if (!music9.openFromFile("note/G_4.wav"))
                            return -1;
                        music9.play();
                        sprite3.setPosition(271,410);
                        break;

                    case sf::Keyboard::N:
                        if (!music10.openFromFile("note/A4.wav"))
                            return -1;
                        music10.play();
                        sprite2.setPosition(298,507);
                        break;

                    case sf::Keyboard::J:
                        if (!music11.openFromFile("note/A_4.wav"))
                            return -1;
                        music11.play();
                        sprite3.setPosition(334,410);
                        break;

                    case sf::Keyboard::M:
                        if (!music12.openFromFile("note/B4.wav"))
                            return -1;
                        music12.play();
                        sprite2.setPosition(351,507);
                        break;

                    case sf::Keyboard::Comma:
                        if (!music13.openFromFile("note/C5.wav"))
                            return -1;
                        music13.play();
                        sprite2.setPosition(404,507);
                        break;

                    case sf::Keyboard::L:
                        if (!music14.openFromFile("note/C_5.wav"))
                            return -1;
                        music14.play();
                        sprite3.setPosition(424,410);
                        break;

                    case sf::Keyboard::Period:
                        if (!music15.openFromFile("note/D5.wav"))
                            return -1;
                        music15.play();
                        sprite2.setPosition(457,507);
                        break;

                    case sf::Keyboard::Semicolon:
                        if (!music16.openFromFile("note/D_5.wav"))
                            return -1;
                        music16.play();
                        sprite3.setPosition(490,410);
                        break;

                    case sf::Keyboard::Slash:
                        if (!music17.openFromFile("note/E5.wav"))
                            return -1;
                        music17.play();
                        sprite2.setPosition(509,507);
                        break;

                    case sf::Keyboard::Q:
                        if (!music18.openFromFile("note/F5.wav"))
                            return -1;
                        music18.play();
                        sprite2.setPosition(562,507);
                        break;

                    case sf::Keyboard::Num2:
                        if (!music19.openFromFile("note/F_5.wav"))
                            return -1;
                        music19.play();
                        sprite3.setPosition(580,410);
                        break;

                    case sf::Keyboard::W:
                        if (!music20.openFromFile("note/G5.wav"))
                            return -1;
                        music20.play();
                        sprite2.setPosition(615,507);
                        break;

                    case sf::Keyboard::Num3:
                        if (!music21.openFromFile("note/G_5.wav"))
                            return -1;
                        music21.play();
                        sprite3.setPosition(641,410);
                        break;

                    case sf::Keyboard::E:
                        if (!music22.openFromFile("note/A5.wav"))
                            return -1;
                        music22.play();
                        sprite2.setPosition(668,507);
                        break;

                    case sf::Keyboard::Num4:
                        if (!music23.openFromFile("note/A_5.wav"))
                            return -1;
                        music23.play();
                        sprite3.setPosition(704,410);
                        break;

                    case sf::Keyboard::R:
                        if (!music24.openFromFile("note/B5.wav"))
                            return -1;
                        music24.play();
                        sprite2.setPosition(721,507);
                        break;

                    case sf::Keyboard::T:
                        if (!music25.openFromFile("note/C6.wav"))
                            return -1;
                        music25.play();
                        sprite2.setPosition(774,507);
                        break;

                    case sf::Keyboard::Num6:
                        if (!music26.openFromFile("note/C_6.wav"))
                            return -1;
                        music26.play();
                        sprite3.setPosition(794,410);
                        break;

                    case sf::Keyboard::Y:
                        if (!music27.openFromFile("note/D6.wav"))
                            return -1;
                        music27.play();
                        sprite2.setPosition(827,507);
                        break;

                    case sf::Keyboard::Num7:
                        if (!music28.openFromFile("note/D_6.wav"))
                            return -1;
                        music28.play();
                        sprite3.setPosition(860,410);
                        break;

                    case sf::Keyboard::U:
                        if (!music29.openFromFile("note/E6.wav"))
                            return -1;
                        music29.play();
                        sprite2.setPosition(880,507);
                        break;

                    case sf::Keyboard::I:
                        if (!music30.openFromFile("note/F6.wav"))
                            return -1;
                        music30.play();
                        sprite2.setPosition(933,507);
                        break;

                    case sf::Keyboard::Num9:
                        if (!music31.openFromFile("note/F_6.wav"))
                            return -1;
                        music31.play();
                        sprite3.setPosition(950,410);
                        break;

                    case sf::Keyboard::O:
                        if (!music32.openFromFile("note/G6.wav"))
                            return -1;
                        music32.play();
                        sprite2.setPosition(986,507);
                        break;

                    case sf::Keyboard::Num0:
                        if (!music33.openFromFile("note/G_6.wav"))
                            return -1;
                        music33.play();;
                        sprite3.setPosition(1011,410);
                        break;

                    case sf::Keyboard::P:
                        if (!music34.openFromFile("note/A6.wav"))
                            return -1;
                        music34.play();
                        sprite2.setPosition(1039,507);
                        break;

                    case sf::Keyboard::Dash:
                        if (!music35.openFromFile("note/A_6.wav"))
                            return -1;
                        music35.play();
                        sprite3.setPosition(1074,410);
                        break;

                    case sf::Keyboard::LBracket:
                        if (!music36.openFromFile("note/B6.wav"))
                            return -1;
                        music36.play();
                        sprite2.setPosition(1091,507);
                        break;
                }
            }
            else if (event.type == sf::Event::KeyReleased)
            {
                switch (event.key.code)
                {
                    case sf::Keyboard::Z:
                        music1.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::S:
                        music2.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::X:
                        music3.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::D:
                        music4.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::C:
                        music5.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::V:
                        music6.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::G:
                        music7.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::B:
                        music8.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::H:
                        music9.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::N:
                        music10.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::J:
                        music11.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::M:
                        music12.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Comma:
                        music13.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::L:
                        music14.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Period:
                        music15.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::SemiColon:
                        music16.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Slash:
                        music17.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Q:
                        music18.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num2:
                        music19.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::W:
                        music20.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num3:
                        music21.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::E:
                        music22.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num4:
                        music23.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::R:
                        music24.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::T:
                        music25.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num6:
                        music26.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Y:
                        music27.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num7:
                        music28.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::U:
                        music29.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::I:
                        music30.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num9:
                        music31.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::O:
                        music32.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Num0:
                        music33.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::P:
                        music34.stop();
                        sprite2.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::Dash:
                        music35.stop();
                        sprite3.setPosition(-200,-200);
                        break;

                    case sf::Keyboard::LBracket:
                        music36.stop();
                        sprite2.setPosition(-200,-200);
                        break;
                }
            }
        }

        app.clear();

        app.draw(sprite);
        app.draw(sprite2);
        app.draw(sprite3);

        app.display();
    }

    return EXIT_SUCCESS;
}

