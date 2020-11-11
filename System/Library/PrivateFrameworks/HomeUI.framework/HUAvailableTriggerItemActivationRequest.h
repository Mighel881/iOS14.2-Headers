/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HUAvailableTriggerItem, NAFuture;

@interface HUAvailableTriggerItemActivationRequest : NSObject {

	BOOL _active;
	HUAvailableTriggerItem* _item;
	NAFuture* _completionFuture;

}

@property (assign,nonatomic,__weak) HUAvailableTriggerItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NAFuture * completionFuture;                       //@synthesize completionFuture=_completionFuture - In the implementation block
@property (assign,nonatomic) BOOL active;                                       //@synthesize active=_active - In the implementation block
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(HUAvailableTriggerItem *)item;
-(void)setItem:(HUAvailableTriggerItem *)arg1 ;
-(NAFuture *)completionFuture;
-(void)setCompletionFuture:(NAFuture *)arg1 ;
-(id)initWithItem:(id)arg1 active:(BOOL)arg2 ;
-(BOOL)isSameAsRequest:(id)arg1 ;
@end
