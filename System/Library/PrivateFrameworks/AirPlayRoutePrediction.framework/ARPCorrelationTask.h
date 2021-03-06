/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@class NSString;

@interface ARPCorrelationTask : NSObject {

	NSString* _file;
	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,copy,readonly) NSString * file;                                 //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(NSString *)file;
-(void)execute;
-(id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2 ;
-(id)longFormVideoAppBundleIDs;
@end

