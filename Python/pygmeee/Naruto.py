import pygame
pygame.init()

# Making window for game
win = pygame.display.set_mode((700, 500))
pygame.display.set_caption("Naruto Vs Sasuke")


rightWalk=[pygame.image.load("pics/NR2.png"),pygame.image.load("pics/NR3.png"),pygame.image.load("pics/NR1.png"),pygame.image.load("pics/NR4.png")]
leftWalk=[pygame.image.load("pics/NL2.png"),pygame.image.load("pics/NL3.png"),pygame.image.load("pics/NL1.png"),pygame.image.load("pics/NL4.png")]
bg= pygame.image.load("pics/bg.png")
stand=pygame.image.load("pics/Nstanding.png")
clock= pygame.time.Clock()
left= False
right=False
walkCount=0
x = 50
y = 400
v = 12
is_jumping = False
jump_height = 8.5
jump_direction = 1
def redrawWin():
    global left
    global right
    global walkCount
    win.blit(bg,(0,0))

    if walkCount>5: walkCount=0
    if left and not is_jumping:win.blit(leftWalk[walkCount//2], (x,y)) ;walkCount+=1
    elif right and not is_jumping:win.blit(rightWalk[walkCount//2], (x,y))  ; walkCount+=1
    elif right and is_jumping:win.blit(rightWalk[3], (x,y))
    elif left and is_jumping:win.blit(leftWalk[3], (x,y))
    elif not is_jumping: win.blit(stand,(x,y))
    elif is_jumping: win.blit(stand,(x,y))



#---------------------LOOP START--------------------------#
run = True
while run:
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT] and x<610:
        x += v
        right=True
        left=False

    elif keys[pygame.K_LEFT] and x > 10:
        x -= v
        left=True
        right=False

    else:
        left=False
        right=False
        walkCount=0

    #------------------------jumping-------------------------#
    if  is_jumping==False:
        if keys[pygame.K_SPACE]:
            is_jumping = True
            walkCount=0
    else:
        if jump_height >= -8:
            if jump_height < 0: jump_direction = -1
            y -= (jump_height ** 2 ) * 0.5 * jump_direction 
            jump_height -= 1
        else:
            is_jumping = False
            jump_height = 8
            jump_direction = 1
    #-----------------------JUMPING--------------------------#
   
    # win.fill((0,0,0))
    # pygame.draw.rect(win, (255, 255, 255), (x, y, 40, 60))


    for event in pygame.event.get():
        if event.type == pygame.QUIT:   
            run = False
    pygame.time.delay(20)
    redrawWin()
    pygame.display.update()

    
#---------------------- LOOP ENDS -----------------------#
pygame.quit()