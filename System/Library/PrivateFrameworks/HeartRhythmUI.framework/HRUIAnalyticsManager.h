/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HRUIAnalyticsManager : NSObject {

	long long _currentAtrialFibrillationOnboardingStep;
	long long _currentElectrocardiogramOnboardingStep;

}
+(id)sharedManager;
-(id)init;
-(void)trackElectrocardiogramPDFViewed;
-(void)trackElectrocardiogramDataTypeViewed;
-(void)trackElectrocardiogramPDFShared;
-(void)trackAtrialFibrillationDetectionOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4 provenance:(long long)arg5 ;
-(id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)arg1 ;
-(id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)arg1 ;
-(void)trackElectrocardiogramOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4 provenance:(long long)arg5 ;
@end
