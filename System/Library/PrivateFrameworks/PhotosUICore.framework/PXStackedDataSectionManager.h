/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXDataSectionManagerEnabling.h>

@class NSString;

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling> {

	BOOL _enabled;
	BOOL _alwaysContainsObjects;
	id _additionalStorage;

}

@property (assign,nonatomic) BOOL alwaysContainsObjects;                 //@synthesize alwaysContainsObjects=_alwaysContainsObjects - In the implementation block
@property (nonatomic,retain) id additionalStorage;                       //@synthesize additionalStorage=_additionalStorage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_updateDataSectionIfNecessary;
-(BOOL)isDataSectionEmpty;
-(id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(BOOL)alwaysContainsObjects;
-(id)additionalStorage;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(BOOL)isEnabled;
-(void)setAdditionalStorage:(id)arg1 ;
-(void)setAlwaysContainsObjects:(BOOL)arg1 ;
@end

