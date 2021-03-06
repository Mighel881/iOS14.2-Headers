/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPItemCollection.h>

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {

	FPExtensionEnumerationSettings* _settings;
	FPItemID* _alternateID;

}

@property (copy) FPExtensionEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2 ;
+(BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setSettings:(FPExtensionEnumerationSettings *)arg1 ;
-(id)description;
-(BOOL)isRootItem:(id)arg1 ;
-(FPExtensionEnumerationSettings *)settings;
-(id)enumeratedItemID;
-(void)updateRootItem:(id)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
@end

