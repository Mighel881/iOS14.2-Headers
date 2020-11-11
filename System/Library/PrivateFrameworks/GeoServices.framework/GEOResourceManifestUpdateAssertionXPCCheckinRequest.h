/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class NSString;

@interface GEOResourceManifestUpdateAssertionXPCCheckinRequest : GEOXPCRequest <GEOXPCRequest> {

	NSString* _reason;
	double _timestamp;

}

@property (nonatomic,retain) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(NSString *)reason;
-(BOOL)expectsReply;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isValid;
@end
