/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
GainTutorialAudioProcessorEditor::GainTutorialAudioProcessorEditor (GainTutorialAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    mGainSlider.setSliderStyle (Slider::SliderStyle::LinearVertical);
    mGainSlider.setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mGainSlider.setRange (-60.0f, 0.0f, 0.01f);
    mGainSlider.setValue (-20.0f);
    mGainSlider.addListener (this);
    addAndMakeVisible (mGainSlider);
    
    setSize (200, 300);
}

GainTutorialAudioProcessorEditor::~GainTutorialAudioProcessorEditor()
{
}

//==============================================================================
void GainTutorialAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void GainTutorialAudioProcessorEditor::resized()
{
    mGainSlider.setBounds (getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 150);
}

void GainTutorialAudioProcessorEditor::sliderValueChanged (Slider *slider)
{
    if (slider == &mGainSlider)
    {
        processor.mGain = mGainSlider.getValue();
    }
}
