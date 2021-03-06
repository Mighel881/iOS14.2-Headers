/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MPMutableUniversalStoreIdentifiers <MPUniversalStoreIdentifiers>
@property (nonatomic,copy) NSString * globalPlaylistID; 
@property (assign,nonatomic) long long adamID; 
@property (nonatomic,copy) NSArray * formerAdamIDs; 
@property (nonatomic,copy) NSString * universalCloudLibraryID; 
@property (assign,nonatomic) long long purchasedAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID; 
@property (nonatomic,copy) NSString * socialProfileID; 
@property (nonatomic,copy) NSString * informalMediaClipID; 
@property (nonatomic,copy) NSString * informalStaticAssetID; 
@required
-(long long)adamID;
-(NSArray *)formerAdamIDs;
-(void)setFormerAdamIDs:(id)arg1;
-(NSString *)universalCloudLibraryID;
-(void)setUniversalCloudLibraryID:(id)arg1;
-(void)setPurchasedAdamID:(long long)arg1;
-(void)setSubscriptionAdamID:(long long)arg1;
-(void)setSocialProfileID:(id)arg1;
-(NSString *)informalMediaClipID;
-(void)setInformalMediaClipID:(id)arg1;
-(NSString *)informalStaticAssetID;
-(void)setInformalStaticAssetID:(id)arg1;
-(NSString *)socialProfileID;
-(long long)purchasedAdamID;
-(long long)subscriptionAdamID;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(id)arg1;
-(void)setAdamID:(long long)arg1;

@end

