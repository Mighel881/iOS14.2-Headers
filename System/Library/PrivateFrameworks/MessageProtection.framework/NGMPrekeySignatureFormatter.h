/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SignatureFormatter.h>

@class NSData, NSString;

@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter> {

	double _timestamp;
	NSData* _prekeyPublic;

}

@property (nonatomic,readonly) NSData * prekeyPublic;               //@synthesize prekeyPublic=_prekeyPublic - In the implementation block
@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)signedData;
-(double)timestamp;
-(id)initToSignKey:(id)arg1 ;
-(NSData *)prekeyPublic;
-(id)initWithPublicPrekey:(id)arg1 ;
@end

