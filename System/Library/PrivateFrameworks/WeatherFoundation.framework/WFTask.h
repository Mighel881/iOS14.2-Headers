/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFTaskIdentifier, NSProgress;

@interface WFTask : NSObject {

	BOOL _requiresResponse;
	WFTaskIdentifier* _identifier;
	NSProgress* _progress;

}

@property (nonatomic,readonly) WFTaskIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresResponse;                      //@synthesize requiresResponse=_requiresResponse - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)sharedServiceConnection;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(void)handleResponse:(id)arg1 ;
-(void)start;
-(id)init;
-(BOOL)isCancelled;
-(BOOL)requiresResponse;
-(WFTaskIdentifier *)identifier;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)executeSynchronously;
-(void)cleanup;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)cancel;
@end
