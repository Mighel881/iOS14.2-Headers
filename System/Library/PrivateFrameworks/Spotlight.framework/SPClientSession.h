/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, PARSession;

@interface SPClientSession : NSObject {

	NSArray* _searchDomains;
	BOOL _observersAdded;
	int _prefsToken;
	PARSession* _session;
	long long _contentFilter;
	BOOL _infinitePatience;
	long long _maxUISuggestions;

}

@property (readonly) NSArray * disabledBundleIds; 
@property (assign,nonatomic) BOOL infinitePatience;              //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign) long long maxUISuggestions;                   //@synthesize maxUISuggestions=_maxUISuggestions - In the implementation block
+(void)initialize;
+(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(void)preheat;
-(NSArray *)disabledBundleIds;
-(id)init;
-(BOOL)infinitePatience;
-(void)activate;
-(BOOL)_setSearchDomains:(id)arg1 ;
-(void)setMaxUISuggestions:(long long)arg1 ;
-(long long)maxUISuggestions;
-(void)finishRanking:(id)arg1 blendingDuration:(double)arg2 ;
-(void)deactivate;
-(long long)contentFilters;
-(id)queryTaskWithContext:(id)arg1 ;
-(void)setInfinitePatience:(BOOL)arg1 ;
@end

