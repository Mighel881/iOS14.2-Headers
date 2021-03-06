/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * diplayedText; 
@property (assign,nonatomic) BOOL displayTeamLocationOverName; 
@property (nonatomic,copy) NSString * displayedText; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SASportsSeason * season; 
@property (nonatomic,copy) NSString * sport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)league;
+(id)leagueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sport;
-(SASportsSeason *)season;
-(id)encodedClassName;
-(NSString *)identifier;
-(NSString *)displayedText;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSport:(NSString *)arg1 ;
-(void)setSeason:(SASportsSeason *)arg1 ;
-(NSString *)diplayedText;
-(void)setDiplayedText:(NSString *)arg1 ;
-(BOOL)displayTeamLocationOverName;
-(void)setDisplayTeamLocationOverName:(BOOL)arg1 ;
-(void)setDisplayedText:(NSString *)arg1 ;
@end

