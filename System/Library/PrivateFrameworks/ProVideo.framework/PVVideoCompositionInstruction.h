/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositionInstruction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PVInstructionGraphNode, NSString;

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {

	SCD_Struct_PV29 m_timeRange;
	BOOL m_enablePostProcessing;
	BOOL m_containsTweening;
	NSArray* m_requiredSourceTrackIDs;
	int m_passthroughTrackID;
	PVInstructionGraphNode* m_outputIGNode;
	BOOL _isFreezeFrame;

}

@property (assign,nonatomic) SCD_Struct_PV29 timeRange; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
@property (assign,nonatomic) BOOL containsTweening; 
@property (assign,nonatomic) BOOL isFreezeFrame;                               //@synthesize isFreezeFrame=_isFreezeFrame - In the implementation block
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs; 
@property (nonatomic,readonly) int passthroughTrackID; 
@property (nonatomic,retain) PVInstructionGraphNode * outputNode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTimeRange:(SCD_Struct_PV29)arg1 ;
-(SCD_Struct_PV29)timeRange;
-(NSString *)description;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(PVInstructionGraphNode *)outputNode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutputNode:(PVInstructionGraphNode *)arg1 ;
-(void)setContainsTweening:(BOOL)arg1 ;
-(void)setIsFreezeFrame:(BOOL)arg1 ;
-(BOOL)isFreezeFrame;
-(void)unloadInstructionGraphNodes;
-(void)loadInstructionGraphNodes:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(id)videoInstructionDescription;
@end
