/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface AMSRatingSystem : NSObject {

	NSString* _kind;
	NSString* _label;
	NSArray* _contentRatings;
	NSString* _ratingSystemID;

}

@property (nonatomic,readonly) NSString * kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSArray * contentRatings;               //@synthesize contentRatings=_contentRatings - In the implementation block
@property (nonatomic,readonly) NSString * ratingSystemID;              //@synthesize ratingSystemID=_ratingSystemID - In the implementation block
+(id)ratingSystemWithDictionary:(id)arg1 ;
-(NSString *)kind;
-(NSString *)label;
-(NSString *)ratingSystemID;
-(NSArray *)contentRatings;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
@end
