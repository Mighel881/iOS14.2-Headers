/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	BOOL _called;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL called;                   //@synthesize called=_called - In the implementation block
-(BOOL)called;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setCalled:(BOOL)arg1 ;
-(void)dealloc;
@end
