/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {

	os_unfair_lock_s _lock;
	unsigned _lock_port;
	unsigned _rawPort;
	int _owner;
	NSString* _trace;

}

@property (nonatomic,copy,readonly) NSString * trace;               //@synthesize trace=_trace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(xpc_type_sRef)_decodeType;
+(id)_rightDescription;
+(id)_descriptionForPort:(unsigned)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4 ;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
-(BOOL)isUsable;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(unsigned)port;
-(NSString *)trace;
-(unsigned)rawPort;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end
