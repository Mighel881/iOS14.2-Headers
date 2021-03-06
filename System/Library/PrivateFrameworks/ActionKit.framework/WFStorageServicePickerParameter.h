/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFiCloudDriveAccessResource* _iCloudDriveAccessResource;

}

@property (nonatomic,retain) WFiCloudDriveAccessResource * iCloudDriveAccessResource;              //@synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)possibleStates;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(WFiCloudDriveAccessResource *)iCloudDriveAccessResource;
-(void)setICloudDriveAccessResource:(WFiCloudDriveAccessResource *)arg1 ;
@end

