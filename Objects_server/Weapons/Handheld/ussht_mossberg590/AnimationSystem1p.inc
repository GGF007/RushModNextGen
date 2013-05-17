animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.03/0.02/0.03
animationSystem.cameraSpring.zoomDamping 2/3/4
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/20

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_deploy.baf
animationManager.looping 0
animationManager.length 1.2
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_fire.baf
animationManager.looping 0
animationManager.noiceFreq 3
animationManager.noiceAmplitude 0.002
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_1.baf
animationManager.looping 0
animationManager.length 0.7
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_2.baf
animationManager.length 0.55
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_3.baf
animationManager.looping 0
animationManager.length 1.1
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_sprint.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_tozoom.baf
animationManager.looping 0
animationManager.length 0.3
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_fire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_run.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_load.baf
animationManager.looping 0
animationManager.length 0.9
animationSystem.createAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_load.baf
animationManager.looping 0
animationManager.length 0.9

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_fire.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_3.baf
animationBundle.setAnimationStartTime Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_3.baf 1.25
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_2.baf
animationBundle.setAnimationStartTime Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_2.baf 0.7
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_1.baf
animationBundle.addEvent effect:0
animationBundle.setEventStartTime effect:0 1.65

animationSystem.createBundle reload_2
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_2.baf

animationSystem.createBundle reload_3
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_reload_3.baf

animationSystem.createBundle shift
animationBundle.isLooping 0
animationBundle.fadeInTime 0.05
animationBundle.fadeOutTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_load.baf
animationBundle.addEvent effect:0
animationBundle.setEventStartTime effect:0 0.167
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_run.baf

animationSystem.createBundle sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_run.baf

animationSystem.createBundle zoom_still
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_stand.baf

animationSystem.createBundle zoom_shift
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.05
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_zoom_load.baf
animationBundle.addEvent effect:0
animationBundle.setEventStartTime effect:0 0.167
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/ussht_mossberg590/Animations/1p/1p_mossberg_tozoom.baf



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
