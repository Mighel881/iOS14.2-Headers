/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

@interface STIntroIdentityViewController : OBWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;

}

@property (readonly) STIntroductionModel * model;              //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                  //@synthesize continueHandler=_continueHandler - In the implementation block
-(STIntroductionModel *)model;
-(id)continueHandler;
-(void)loadView;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(void)_myDevice:(id)arg1 ;
-(void)_myChildsDevice:(id)arg1 ;
@end

