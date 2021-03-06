/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplaySuggestion.h>

@class NSString, NSDictionary, NSDate, PHAsset;

@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion> {

	unsigned short _type;
	unsigned short _subtype;
	unsigned short _state;
	NSString* _title;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSDictionary* _actionProperties;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned short state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                       //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                 //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionProperties;              //@synthesize actionProperties=_actionProperties - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localIdentifier;
-(unsigned short)subtype;
-(PHAsset *)asset;
-(NSString *)localizedSubtitle;
-(NSString *)localizedTitle;
-(id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4 ;
-(NSDate *)endDate;
-(id)fetchKeyAssets;
-(unsigned short)state;
-(NSDate *)startDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)actionProperties;
-(NSString *)title;
-(unsigned short)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

