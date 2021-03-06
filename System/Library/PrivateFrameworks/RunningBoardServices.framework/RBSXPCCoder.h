/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCEncoding.h>
#import <libobjc.A.dylib/RBSXPCDecoding.h>

@protocol OS_xpc_object;
@class NSObject, NSKeyedArchiver, NSKeyedUnarchiver, NSString;

@interface RBSXPCCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding> {

	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _codingContext;
	NSKeyedArchiver* _archiver;
	NSKeyedUnarchiver* _unarchiver;
	int _finalized;

}

@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> XPCConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)coderWithMessage:(id)arg1 ;
+(id)rbs_testNSEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)rbs_testEncode:(id)arg1 andDecodeOfExpectedClass:(Class)arg2 ;
+(id)coder;
-(NSObject*<OS_xpc_object>)XPCConnection;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_finishCoding;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithMessage:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(NSObject*<OS_xpc_object>)message;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(id)decodeStringForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)_implicitDecodeXPCObjectForKey:(id)arg1 ;
-(id)createMessage;
-(void)_removeValueForKey:(id)arg1 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
@end

