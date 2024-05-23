import pygame
pygame.init()

# Making window for game
win = pygame.display.set_mode((1100, 600))
pygame.display.set_caption("Reyad's Naruto")
x = 5
y = 450
v = 30
is_jumping = False

jump_height = 8
############################################




run = True
while run:
    pygame.time.delay(50)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    keys = pygame.key.get_pressed()

    if keys[pygame.K_RIGHT] and x<1050:
        x += v
    if keys[pygame.K_LEFT] and x > 5:
        x -= v
    
    
        


##################jumping##########################
    if not is_jumping:
        if keys[pygame.K_UP]:
            is_jumping = True
    else:
        if jump_height >= -8:
            neg = 1
            if jump_height < 0:
                neg = -1
            y -= (jump_height ** 2 ) * 0.5 * neg 
            jump_height -= 1
        else:
            is_jumping = False
            jump_height = 8
###################################################
         
            

    win.fill((100, 100, 100))


    pygame.draw.rect(win, (255, 255, 255), (x, y, 40, 60))
    # pygame.draw.rect(win, (255, 255, 255), (x2, y2, 40, 60))
    


    pygame.display.update()

pygame.quit()
