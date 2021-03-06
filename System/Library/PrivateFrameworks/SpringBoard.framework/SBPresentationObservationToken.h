/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable> {

	long long _state;
	/*^block*/id _willPresentHandler;
	/*^block*/id _didPresentHandler;
	/*^block*/id _willDismissHandler;
	/*^block*/id _didDismissHandler;

}

@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id willPresentHandler;                   //@synthesize willPresentHandler=_willPresentHandler - In the implementation block
@property (nonatomic,copy) id didPresentHandler;                    //@synthesize didPresentHandler=_didPresentHandler - In the implementation block
@property (nonatomic,copy) id willDismissHandler;                   //@synthesize willDismissHandler=_willDismissHandler - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                    //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPresent;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
-(long long)state;
-(void)willPresent;
-(void)willDismiss;
-(void)invalidate;
-(void)didDismiss;
-(id)willPresentHandler;
-(void)setWillPresentHandler:(id)arg1 ;
-(id)didPresentHandler;
-(void)setDidPresentHandler:(id)arg1 ;
-(id)willDismissHandler;
-(void)setWillDismissHandler:(id)arg1 ;
@end

