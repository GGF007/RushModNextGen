animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.015/0.015/0.015
animationSystem.cameraSpring.zoomDamping 2.5/2.5/0
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/150

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_deploy.baf
animationManager.looping 0
animationManager.length 1.0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_fire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_idle1.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_idle2.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_reload.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_sprint.baf
animationManager.length 0.68
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_tozoom.baf
animationManager.looping 0
animationManager.length 0.083333
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomFire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomRun.baf
animationSystem.createAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomStand.baf

rem *** Bundles ***
animationSystem.createBundle changeFirerate
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001

animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_fire.baf

animationSystem.createBundle idle1
animationBundle.isLooping 0
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_idle1.baf

animationSystem.createBundle idle2
animationBundle.isLooping 0
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_idle2.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_reload.baf

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_run.baf

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_stand.baf

animationSystem.createBundle zoom_changeFirerate
animationBundle.isLooping 0

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomFire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomRun.baf

animationSystem.createBundle zoom_still
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_zoomStand.baf

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/chat_eryx/Animations/1p/1p_eryx_tozoom.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger zoom_still
animationTrigger.addBundle zoom_still

animationSystem.createTrigger MovementTrigger zoom_move
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move

animationSystem.createTrigger MessageTrigger zoom_fire
animationTrigger.addBundle zoom_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger zoom_changeFirerate
animationTrigger.addBundle zoom_changeFirerate
animationTrigger.message 8

animationSystem.createTrigger Trigger zoom
animationTrigger.fadeInTime 0.2
animationTrigger.addChild zoom_still
animationTrigger.addChild zoom_move
animationTrigger.addChild zoom_fire
animationTrigger.addChild zoom_changeFirerate

animationSystem.createTrigger RandomTrigger rnd_idle
animationTrigger.addBundle idle1
animationTrigger.addBundle idle2

animationSystem.createTrigger IdleTrigger idle
animationTrigger.addChild rnd_idle
animationTrigger.idleTime 5/15

animationSystem.createTrigger Trigger still
animationTrigger.addChild idle
animationTrigger.addBundle still

animationSystem.createTrigger MovementTrigger move
animationTrigger.addBundle run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger sprint
animationTrigger.addBundle sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addBundle fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addBundle reload
animationTrigger.message 2

animationSystem.createTrigger Trigger normal
animationTrigger.fadeInTime 0.2
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire
animationTrigger.addChild reload

animationSystem.createTrigger SwitchMessageTrigger root
animationTrigger.addChild zoom
animationTrigger.addChild normal
animationTrigger.addBundle zoomTransition
animationTrigger.message 4

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup
