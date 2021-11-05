//Ignition and retraction timed for Duel (Ronin) by Kyberphonic.
//two-tone blade blue-white near the hilt with a flicker. Responsive lockups / melts / lightning / etc.
//no preon, might add one commented out later. The sound font this was made for has no preon so it bugs out when one is present.

StylePtr<Layers<
  AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,OrangeRed>>,
  AlphaL<AlphaL<Mix<SwingSpeed<800>,Red,Orange,White>,Scale<SwingSpeed<600>,Int<0>,Int<32768>>>,SmoothStep<Scale<SwingSpeed<900>,Int<32768>,Int<16000>>,Int<16000>>>,
  TransitionEffectL<TrWaveX<White,Int<400>,Int<100>,Int<600>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>>>,EFFECT_LOCKUP_END>,
  ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
  ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
  AlphaL<Gradient<Gradient<LightCyan,HotPink>,HotPink,HotPink,HotPink>,SmoothStep<Scale<NoisySoundLevel,Int<3072>,Int<6144>>,Int<-16384>>>,
  ResponsiveStabL<Orange>,
  ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
  ResponsiveClashL<White,TrInstant,TrFade<400>>,
  TransitionEffectL<TrConcat<TrInstant,HumpFlickerL<White,40>,TrFade<800>>,EFFECT_IGNITION>,
  AlphaL<Black,SmoothStep<Scale<SlowNoise<Int<2048>>,Int<28672>,Int<32768>>,Int<22000>>>,
  LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
  LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
  InOutTrL<TrWipeX<Scale<BladeAngle<>,Int<800>,Int<700>>>,TrWipeInX<Scale<BladeAngle<>,Int<800>,Int<700>>>>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<LightCyan,Bump<Int<0>,Int<10000>>>,TrFade<1000>,AlphaL<HotPink,Bump<Int<0>,Int<8000>>>,TrFade<1000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<1500>>,EFFECT_RETRACTION>,
  TransitionEffectL<TrConcat<TrDelay<1500>,Black,TrFade<1000>,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_BOOT>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<Mix<BatteryLevel,Red,Green>,Bump<Int<0>,Int<6000>>>,TrFade<3000>>,EFFECT_NEWFONT>>>()
