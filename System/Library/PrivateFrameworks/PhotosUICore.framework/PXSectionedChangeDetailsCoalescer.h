/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXMutableArrayChangeDetails, NSMutableArray, PXSectionedDataSourceChangeDetails;

@interface PXSectionedChangeDetailsCoalescer : NSObject {

	unsigned long long _fromDataSourceIdentifier;
	unsigned long long _currentToDataSourceIdentifier;
	PXMutableArrayChangeDetails* _sectionChangeDetails;
	NSMutableArray* _itemChangeEntries;
	PXSectionedDataSourceChangeDetails* _cachedResult;

}

@property (nonatomic,readonly) PXSectionedDataSourceChangeDetails * coalescedChangeDetails; 
+(id)changeDetailsByCoalescingChangeDetails:(id)arg1 ;
+(BOOL)_verboseLoggingEnabled;
-(id)init;
-(void)addChangeDetails:(id)arg1 ;
-(id)initWithSectionedChangeDetails:(id)arg1 ;
-(PXSectionedDataSourceChangeDetails *)coalescedChangeDetails;
@end

