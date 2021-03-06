/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCloudKitMirroringDelegateOptions;

@interface PFCloudKitOptionsValidator : NSObject {

	NSCloudKitMirroringDelegateOptions* _parsedOptions;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * parsedOptions;              //@synthesize parsedOptions=_parsedOptions - In the implementation block
-(BOOL)_validateContainerIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSCloudKitMirroringDelegateOptions *)parsedOptions;
-(BOOL)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateHistoryTrackingOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateMemoryThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAssetThreshold:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateContainerOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

