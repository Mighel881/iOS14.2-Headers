/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, STRootViewModelCoordinator, STIntroductionController;

@interface STChildSetupController : NSObject {

	/*^block*/id _completionHandler;
	UIViewController* _initialViewController;
	STRootViewModelCoordinator* _coordinator;
	STIntroductionController* _introductionController;

}

@property (nonatomic,retain) STRootViewModelCoordinator * coordinator;                       //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) STIntroductionController * introductionController;              //@synthesize introductionController=_introductionController - In the implementation block
@property (copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * initialViewController;                     //@synthesize initialViewController=_initialViewController - In the implementation block
-(id)completionHandler;
-(void)setCoordinator:(STRootViewModelCoordinator *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(STRootViewModelCoordinator *)coordinator;
-(id)initWithDSID:(id)arg1 ;
-(UIViewController *)initialViewController;
-(void)saveValuesForModel:(id)arg1 ;
-(STIntroductionController *)introductionController;
-(void)setIntroductionController:(STIntroductionController *)arg1 ;
@end
