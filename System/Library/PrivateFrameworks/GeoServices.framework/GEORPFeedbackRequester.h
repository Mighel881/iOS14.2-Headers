/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOServiceRequester.h>

@interface GEORPFeedbackRequester : GEOServiceRequester
+(id)sharedInstance;
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(id)_requestConfigForRequest:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
