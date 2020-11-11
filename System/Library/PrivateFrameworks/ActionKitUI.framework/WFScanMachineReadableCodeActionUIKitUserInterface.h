/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFScanMachineReadableCodeActionUserInterface.h>

@class UINavigationController, NSString;

@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFActionUserInterface <WFScanMachineReadableCodeActionUserInterface> {

	/*^block*/id _completionHandler;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(UINavigationController *)navigationController;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithCode:(id)arg1 error:(id)arg2 ;
@end
