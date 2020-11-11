/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessible;
	BOOL _evergreen;
	NSString* _identifier;
	NSString* _publisherID;
	double _score;
	NSSet* _whitelistedTopicIDs;
	unsigned long long _groupingReason;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * publisherID;                         //@synthesize publisherID=_publisherID - In the implementation block
@property (assign,nonatomic) double score;                                   //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL accessible;                                //@synthesize accessible=_accessible - In the implementation block
@property (assign,nonatomic) BOOL evergreen;                                 //@synthesize evergreen=_evergreen - In the implementation block
@property (nonatomic,retain) NSSet * whitelistedTopicIDs;                    //@synthesize whitelistedTopicIDs=_whitelistedTopicIDs - In the implementation block
@property (assign,nonatomic) unsigned long long groupingReason;              //@synthesize groupingReason=_groupingReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setScore:(double)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)publisherID;
-(double)score;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)evergreen;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 evergreen:(BOOL)arg5 whitelistedTopicIDs:(id)arg6 ;
-(BOOL)accessible;
-(NSSet *)whitelistedTopicIDs;
-(void)setPublisherID:(NSString *)arg1 ;
-(void)setAccessible:(BOOL)arg1 ;
-(void)setEvergreen:(BOOL)arg1 ;
-(void)setWhitelistedTopicIDs:(NSSet *)arg1 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(BOOL)arg4 evergreen:(BOOL)arg5 ;
-(id)initWithID:(id)arg1 publisherID:(id)arg2 accessible:(BOOL)arg3 evergreen:(BOOL)arg4 whitelistedTopicIDs:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroupingReason:(unsigned long long)arg1 ;
-(unsigned long long)groupingReason;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
