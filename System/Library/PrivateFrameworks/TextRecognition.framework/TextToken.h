/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface TextToken : NSObject {

	int _wordID;
	NSString* _string;
	double _score;
	NSArray* _features;
	unsigned long long _properties;

}

@property (readonly) NSString * string;                                    //@synthesize string=_string - In the implementation block
@property (readonly) double score;                                         //@synthesize score=_score - In the implementation block
@property (readonly) NSArray * features;                                   //@synthesize features=_features - In the implementation block
@property (readonly) int wordID;                                           //@synthesize wordID=_wordID - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(int)wordID;
-(double)score;
-(unsigned long long)properties;
-(NSArray *)features;
-(NSString *)string;
-(id)initWithString:(id)arg1 score:(double)arg2 features:(id)arg3 wordID:(int)arg4 properties:(unsigned long long)arg5 ;
@end

