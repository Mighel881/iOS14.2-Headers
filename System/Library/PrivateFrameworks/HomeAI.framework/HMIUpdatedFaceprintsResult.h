/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSSet;

@interface HMIUpdatedFaceprintsResult : HMFObject {

	NSSet* _existingAtOtherVersions;
	NSSet* _createdAtCurrentVersion;
	NSSet* _existingAtCurrentVersion;

}

@property (readonly) NSSet * allAtCurrentVersion; 
@property (readonly) NSSet * existingAtOtherVersions;               //@synthesize existingAtOtherVersions=_existingAtOtherVersions - In the implementation block
@property (readonly) NSSet * createdAtCurrentVersion;               //@synthesize createdAtCurrentVersion=_createdAtCurrentVersion - In the implementation block
@property (readonly) NSSet * existingAtCurrentVersion;              //@synthesize existingAtCurrentVersion=_existingAtCurrentVersion - In the implementation block
-(NSSet *)existingAtCurrentVersion;
-(NSSet *)createdAtCurrentVersion;
-(id)initWithExistingAtCurrentVersion:(id)arg1 createdAtCurrentVersion:(id)arg2 existingAtOtherVersions:(id)arg3 ;
-(NSSet *)allAtCurrentVersion;
-(NSSet *)existingAtOtherVersions;
@end

