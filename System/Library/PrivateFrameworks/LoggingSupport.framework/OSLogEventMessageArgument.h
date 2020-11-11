/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class OSLogEventDecomposedMessage, NSObject;

@interface OSLogEventMessageArgument : NSObject {

	OSLogEventDecomposedMessage* _decomposedMessage;
	os_log_fmt_raw_placeholder* _rawArg;
	unsigned long long _sizeofLong;

}

@property (nonatomic,readonly) unsigned long long availability; 
@property (nonatomic,readonly) unsigned long long privacy; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) unsigned long long scalarCategory; 
@property (nonatomic,readonly) unsigned long long scalarType; 
@property (nonatomic,readonly) NSObject * objectRepresentation; 
@property (nonatomic,readonly) const void* rawBytes; 
@property (nonatomic,readonly) unsigned short rawBytesLength; 
@property (nonatomic,readonly) unsigned long long unsignedInt64Value; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) D longDoubleValue; 
-(unsigned long long)availability;
-(unsigned long long)category;
-(NSObject *)objectRepresentation;
-(double)doubleValue;
-(long long)int64Value;
-(unsigned long long)privacy;
-(const void*)rawBytes;
-(id)initWithProxy:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned short)rawBytesLength;
-(unsigned long long)scalarCategory;
-(unsigned long long)scalarType;
-(unsigned long long)unsignedInt64Value;
-(D)longDoubleValue;
@end
