
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/ChallengerSkirt/Animations/ChallengerSkirt_setup.baf
rem animationManager.looping 1

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/ChallengerSkirt/Animations/ChallengerSkirt_setup.baf

rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still
