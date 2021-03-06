/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange {

	NSSet* _momentLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
-(unsigned long long)changeCount;
-(id)initWithMomentLocalIdentifiers:(id)arg1 ;
-(NSSet *)momentLocalIdentifiers;
-(id)description;
-(unsigned long long)type;
@end

