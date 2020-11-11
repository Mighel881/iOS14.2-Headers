/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> _customProtocolID;
	RetainPtr<__CFRunLoop *>* _initializationRunLoop;

}

@property (nonatomic,readonly) ObjectIdentifier<WebKit::LegacyCustomProtocolIDType> customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef initializationRunLoop; 
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(ObjectIdentifier<WebKit::LegacyCustomProtocolIDType>)customProtocolID;
-(CFRunLoopRef)initializationRunLoop;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
-(void)stopLoading;
@end
