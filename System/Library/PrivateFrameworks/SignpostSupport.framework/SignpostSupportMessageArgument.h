/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject;

@interface SignpostSupportMessageArgument : NSObject {

	unsigned char _type;
	NSObject* _argumentObject;

}

@property (nonatomic,readonly) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject * argumentObject;              //@synthesize argumentObject=_argumentObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)type;
-(NSObject *)argumentObject;
-(id)initWithArgumentObject:(id)arg1 ;
@end

