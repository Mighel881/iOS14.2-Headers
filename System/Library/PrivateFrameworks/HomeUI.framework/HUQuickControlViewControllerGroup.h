/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject {

	HUQuickControlViewController* _primaryViewController;
	NSSet* _alternateViewControllers;

}

@property (nonatomic,readonly) HUQuickControlViewController * primaryViewController;              //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (nonatomic,readonly) NSSet * alternateViewControllers;                                  //@synthesize alternateViewControllers=_alternateViewControllers - In the implementation block
-(HUQuickControlViewController *)primaryViewController;
-(NSSet *)alternateViewControllers;
-(id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2 ;
@end
