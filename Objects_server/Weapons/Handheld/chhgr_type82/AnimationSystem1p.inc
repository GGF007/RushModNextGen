animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.015/0.015/0.015
animationSystem.cameraSpring.zoomDamping 2.5/2.5/0
animationSystem.cameraSpring.stiffness 10/10/10
animationSystem.cameraSpring.move 2/2/2
animationSystem.cameraSpring.look 1/1
animationSystem.cameraSpring.fire 0/0/20

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_deploy.baf
animationManager.looping 0
animationManager.length 1
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_fire_pinremove.baf
animationManager.looping 0
animationManager.length 1
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_fire_throw.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/ushgr_m67/animations/1p/1p_m67_fire_throwbig.baf
animationManager.looping 0
animationManager.length 0.5
animationSystem.createAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_fire_throwSmall.baf
animationManager.looping 0
animationManager.length 0.5
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_run_loaded.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_sprint.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_sprint_loaded.baf
animationSystem.createAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_stand_loaded.baf

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.15
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.fadeInTime 0.01
animationBundle.fadeOutTime 0
animationBundle.playForever 1
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_fire_throw.baf
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle normal_run
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_run.baf

animationSystem.createBundle normal_sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_sprint.baf

animationSystem.createBundle normal_still
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_stand.baf

animationSystem.createBundle pinremove
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/chhgr_type82/Animations/1p/1p_type82_fire_pinremove.baf

animationSystem.createBundle uncocked_fire
animationBundle.isLooping 0
animationBundle.fadeOutTime 0
animationBundle.playForever 1
animationBundle.addAnimation Objects/Weapons/Handheld/ushgr_m67/animations/1p/1p_m67_fire_throwbig.baf
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle uncocked_fireShort
animationBundle.isLooping 0
animationBundle.fadeOutTime 0
animationBundle.playForever 1
animationBundle.addAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_fire_throwSmall.baf
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 0

animationSystem.createBundle uncocked_run
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_run_loaded.baf

animationSystem.createBundle uncocked_sprint
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_sprint_loaded.baf

animationSystem.createBundle uncocked_still
animationBundle.fadeInTime 1.4
animationBundle.addAnimation Objects/Weapons/Handheld/ushgr_m67/Animations/1p/1p_m67_stand_loaded.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger normal_still
animationTrigger.addChild idle
animationTrigger.addBundle normal_still

animationSystem.createTrigger MovementTrigger normal_move
animationTrigger.addBundle normal_run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger normal_sprint
animationTrigger.addBundle normal_sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addBundle fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addBundle deploy
animationTrigger.message 2

animationSystem.createTrigger Trigger normal
animationTrigger.addChild normal_still
animationTrigger.addChild normal_move
animationTrigger.addChild normal_sprint
animationTrigger.addChild fire
animationTrigger.addChild reload

animationSystem.createTrigger Trigger uncocked_still
animationTrigger.addBundle uncocked_still

animationSystem.createTrigger MovementTrigger uncocked_move
animationTrigger.addBundle uncocked_run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger uncocked_sprint
animationTrigger.addBundle uncocked_sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger MessageTrigger uncocked_pinremove
animationTrigger.addBundle pinremove
animationTrigger.message 16

animationSystem.createTrigger MessageTrigger uncocked_fire
animationTrigger.addBundle uncocked_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger uncocked_fireShort
animationTrigger.addBundle uncocked_fireShort
animationTrigger.message 4

animationSystem.createTrigger Trigger uncocked
animationTrigger.addChild uncocked_still
animationTrigger.addChild uncocked_move
animationTrigger.addChild uncocked_sprint
animationTrigger.addChild uncocked_pinremove
animationTrigger.addChild uncocked_fire
animationTrigger.addChild uncocked_fireShort

animationSystem.createTrigger SwitchMessageTrigger root
animationTrigger.addChild normal
animationTrigger.addChild uncocked
animationTrigger.message 8

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup

