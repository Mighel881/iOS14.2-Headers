/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMicroblogMicroblogSearchResultBase.h>

@class NSDate, SADecoratedString, NSArray, NSString, SAUIAppPunchOut, SAMicroblogTwitterPostAuthor, NSURL;

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (nonatomic,copy) NSDate * creationTime; 
@property (nonatomic,retain) SADecoratedString * decoratedContent; 
@property (nonatomic,copy) NSArray * embeddedHashtags; 
@property (nonatomic,copy) NSArray * embeddedImages; 
@property (nonatomic,copy) NSArray * embeddedLinks; 
@property (nonatomic,copy) NSArray * embeddedMentions; 
@property (assign,nonatomic) long long favoritesCount; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,retain) SAMicroblogTwitterPostAuthor * retweetAuthor; 
@property (assign,nonatomic) long long retweetCount; 
@property (nonatomic,copy) NSURL * webAddress; 
+(id)microblogSearchResultPost;
+(id)microblogSearchResultPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIAppPunchOut *)punchOut;
-(NSString *)location;
-(id)encodedClassName;
-(void)setLocation:(NSString *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSURL *)webAddress;
-(void)setWebAddress:(NSURL *)arg1 ;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(long long)favoritesCount;
-(void)setFavoritesCount:(long long)arg1 ;
-(SADecoratedString *)decoratedContent;
-(void)setDecoratedContent:(SADecoratedString *)arg1 ;
-(NSArray *)embeddedHashtags;
-(void)setEmbeddedHashtags:(NSArray *)arg1 ;
-(NSArray *)embeddedImages;
-(void)setEmbeddedImages:(NSArray *)arg1 ;
-(NSArray *)embeddedLinks;
-(SAMicroblogTwitterPostAuthor *)retweetAuthor;
-(void)setEmbeddedLinks:(NSArray *)arg1 ;
-(NSArray *)embeddedMentions;
-(void)setEmbeddedMentions:(NSArray *)arg1 ;
-(void)setRetweetAuthor:(SAMicroblogTwitterPostAuthor *)arg1 ;
-(long long)retweetCount;
-(void)setRetweetCount:(long long)arg1 ;
@end
