/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject {

	NSMutableArray* _searchChain;
	UIViewController* _sourceViewController;
	SEL _unwindAction;
	id _sender;

}

@property (readonly) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (readonly) SEL unwindAction;                                     //@synthesize unwindAction=_unwindAction - In the implementation block
@property (readonly) id sender;                                            //@synthesize sender=_sender - In the implementation block
-(id)init;
-(id)sender;
-(id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3 ;
-(id)_findDestination;
-(SEL)unwindAction;
-(UIViewController *)sourceViewController;
-(id)_childContainingUnwindSourceForViewController:(id)arg1 ;
@end

