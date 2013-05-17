
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Land/usapc_aavp7a1/Animations/3p/3p_aavp7a1_passenger_chair.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Land/usapc_aavp7a1/Animations/3p/3p_aavp7a1_passenger_chair.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still

