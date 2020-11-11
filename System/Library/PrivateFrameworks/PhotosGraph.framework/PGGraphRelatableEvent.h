/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PGGraphRelatableEvent <PGGraphFullMeaninglessEvent>
@required
+(id)pathToMoment;
+(id)pathFromMoment;
+(id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+(id)pathToTargetNodeDomain:(unsigned short)arg1;
+(id)pathFromTargetNodeDomain:(unsigned short)arg1;
-(double)weightForMoment:(id)arg1;
-(id)photoEvent;
-(id)connectedEventsWithTargetDomain:(unsigned short)arg1;
-(id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;

@end
