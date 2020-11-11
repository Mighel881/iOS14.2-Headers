/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface SignpostStackFrame : NSObject {

	NSUUID* _symbolOwnerUUID;
	unsigned long long _offset;

}

@property (nonatomic,readonly) NSUUID * symbolOwnerUUID;               //@synthesize symbolOwnerUUID=_symbolOwnerUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(unsigned long long)offset;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2 ;
-(NSUUID *)symbolOwnerUUID;
-(id)_serializableArrayRepresentation;
-(id)initWithArrayRepresentation:(id)arg1 ;
@end
