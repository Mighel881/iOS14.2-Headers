/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/AppStoreKit.LocalizationProtocol.h>

@class NSString;

@interface AppStoreKit.Localization : NSObject <AppStoreKit.LocalizationProtocol> {

	 localizedStringTables;
	 dateFormatters;
	 dynamicDateFormatters;
	 $__lazy_storage_$_relativeDateFormatter;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * arcadeWordmarkAssetName; 
-(id)relativeDate:(id)arg1 ;
-(id)init;
-(id)stringWithCounts:(id)arg1 :(id)arg2 ;
-(NSString *)identifier;
-(id)stringWithCount:(id)arg1 :(long long)arg2 ;
-(id)formatDateInSentence:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)formatDate:(id)arg1 :(id)arg2 ;
-(id)string:(id)arg1 ;
-(id)formattedCount:(id)arg1 ;
-(NSString *)arcadeWordmarkAssetName;
-(id)decimal:(id)arg1 :(long long)arg2 ;
-(id)fileSize:(id)arg1 ;
-(id)timeAgo:(id)arg1 ;
@end

