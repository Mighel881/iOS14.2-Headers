/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageFromStorageController, NSString;

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {

	unsigned long long _processingType;
	id _broadcaster;
	IMDMessageFromStorageController* _storageController;
	NSString* _service;

}
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)initWithStorageProcessingType:(unsigned long long)arg1 storageController:(id)arg2 broadcaster:(id)arg3 account:(id)arg4 ;
@end

