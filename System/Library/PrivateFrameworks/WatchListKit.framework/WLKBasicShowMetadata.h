/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSString* _network;

}

@property (nonatomic,readonly) NSDate * releaseDate;                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                  //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;              //@synthesize network=_network - In the implementation block
-(NSDate *)releaseDate;
-(id)init;
-(NSString *)network;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)finaleDate;
@end

