/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	NSDictionary* _buyParameters;
	BOOL _includeKeybagSyncData;
	id _parsedResponse;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
-(id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
-(void)cancel;
@end

