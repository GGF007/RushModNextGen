animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.02/0.02/0.02
animationSystem.cameraSpring.zoomDamping 2/3/4
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/20

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_deploy.baf
animationManager.looping 0
animationManager.length 2.3
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_fire.baf
animationManager.looping 0
animationManager.length 0.5
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_load.baf
animationManager.looping 0
animationManager.length 1.85
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload1.baf
animationManager.looping 0
animationManager.length 2
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload2.baf
animationManager.length 0.55
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload3.baf
animationManager.looping 0
animationManager.length 1.9
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_sprint.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_tozoom.baf
animationManager.looping 0
animationManager.length 0.4
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_fire.baf
animationManager.looping 0
animationManager.length 0.5
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_load.baf
animationManager.looping 0
animationManager.length 1.85
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_run.baf
animationManager.length 1.83333
animationSystem.createAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_stand.baf

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_fire.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeInTime 0.05
animationBundle.fadeOutTime 0.15
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload3.baf
animationBundle.setAnimationStartTime Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload3.baf 2.55
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload2.baf
animationBundle.setAnimationStartTime Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload2.baf 2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload1.baf
animationBundle.addEvent effect:0
animationBundle.setEventStartTime effect:0 0.666

animationSystem.createBundle reload_2
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload2.baf

animationSystem.createBundle reload_3
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_reload3.baf

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_run.baf

animationSystem.createBundle shift
animationBundle.isLooping 0
animationBundle.fadeInTime 0.15
animationBundle.fadeOutTime 0.15
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_load.baf
animationBundle.addEvent effect:0
animationBundle.setEventStartTime effect:0 0.71
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_sprint.baf

animationSystem.createBundle still
animationBundle.fadeInTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_run.baf

animationSystem.createBundle zoom_still
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_stand.baf

animationSystem.createBundle zoom_shift
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_zoom_load.baf
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0.05
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/ussni_m24/Animations/1p/1p_m24_tozoom.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger zoom_still
animationTrigger.addBundle zoom_still

animationSystem.createTrigger MovementTrigger zoom_move
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move

animationSystem.createTrigger MessageTrigger zoom_fire
animationTrigger.addBundle zoom_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger zoom_shift
animationTrigger.addBundle zoom_shift
animationTrigger.message 32

animationSystem.createTrigger Trigger zoom
animationTrigger.addChild zoom_still
animationTrigger.addChild zoom_move
animationTrigger.addChild zoom_fire
animationTrigger.addChild zoom_shift

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

animationSystem.createTrigger MessageTrigger shift
animationTrigger.addBundle shift
animationTrigger.message 32

animationSystem.createTrigger Trigger normal
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire
animationTrigger.addChild reload
animationTrigger.addChild shift

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

